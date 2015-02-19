/*
 ============================================================================
 Name        : de.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int N=70;
int password_length=5000;
char map[70] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','@','_','#','!','$','%','*','-'};

int check_key(char *key,int len){
	int i,j,count;
	for(i=0;i<len;i++){
		count=1;
		for(j=0;j<70;j++){
			if(key[i]==map[j]){
				count=0;
				break;
			}
		}
		if(count==1) return 1;
	}
	return 0;
}

//get_int
int get_int(char *key,int pos){
	int i;
	for(i=0;i<70;i++){
		if(key[pos]==map[i]) return i;
	}
	return map[i];
}


//generate master table
void generateMaster(int master[N][N][N]){
	int i,j,k;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			for(k=0;k<N;k++){
				master[i][j][k]=(N+i+j+k)%N;
			}
		}
	}
}

//print master table
void masterPrint(int master[N][N][N]){
	int i,j,k,a;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			for(k=0;k<N;k++){
				printf("%d ",master[i][j][k]);
			}
			printf("\n");
		}
		scanf("%d",&a);
	}
}

//decrypt only one integer
int dec_one(int master[N][N][N],int key1,int key2,int encrypt_password){
	int i=0;
	for(i=0;i<N;i++){
		if(master[i][key1][key2]==encrypt_password) return i;
	}
	return -1;
}

//decrypt the whole encrypt password
void decrypt(int master[N][N][N],int *encrypt_password,int *key1,int *key2){
	int i=0;
	for(i=0;i<password_length;i++){
		//printf("Key1: %d kay2: %d pass: %d\n",key1[i],key2[i],encrypt_password[i] );
		printf("%c",map[dec_one(master,key1[i],key2[i],encrypt_password[i])]); //print the decrypt password
	}
}

int main(void) {
	int i,key1_length,key2_length;
	int master[N][N][N],encrypt_password[password_length];
	int key1[password_length],key2[password_length];
	char s1[password_length],s2[password_length],temp_enc[password_length];
	generateMaster(master);

	printf("Enter Encrypt Password : ");
	scanf("%s",&temp_enc);
	//printf("Enter Encrypt Password : ");
	password_length=strlen(temp_enc);
	for(i=0;i<password_length;i++){
		encrypt_password[i]=get_int(temp_enc,i);
	}

	//enter key 1
	printf("Enter Key1: ");
	do{
		scanf("%s",&s1);
		key1_length=strlen(s1);
		if((check_key(s1,key1_length))) printf("Enter Correct Key.\nERROR CODE-210\nAgain Enter Key1:");
	}while(check_key(s1,key1_length));
	//enter key 2
	printf("Enter Key2: ");
	do{
		scanf("%s",&s2);
		key2_length=strlen(s2);
		if((check_key(s2,key2_length))) printf("Enter Correct Key.\nERROR CODE-210\nAgain Enter Key2:");
	}while(check_key(s2,key2_length));

	//key1_length=3;
	//key2_length=7;

	printf("Decrypt Password : ");
	for(i=0;i<password_length;i++){
		key1[i]=get_int(s1,i%key1_length);
		key2[i]=get_int(s2,i%key2_length);
		//printf("%d ",key1[i]);
	}
	decrypt(master,encrypt_password,key1,key2);
	return EXIT_SUCCESS;
}
//Enter Key1: sexybitch
//Enter Key2: 123456!@#$%
//-PyCkglUyUp_ckruuzvLLbCjN@b3g4qggB*nny2GI1cV$A#qCv_J09qVPA3W7w11Lgj1eTawIV545wWf4fEfG-0h$kfhWR936RS@GzzWB9UAEwftQy@5$#aRg#CgfGjOtztKrllkXo28#F8cy2nVHgj_oeY4%CkpmMgCg4$u14-GOBmRzwDLcCPG3IxFfeDmmwYl6-k0pfTFPd#ke8PuA$tGPNOGw*C!*QXfz!F2Y6gU*#XIcex#WGp1pRDgIUDQ%qmnzAqIrAWzEi-v1Z%JPJWZu@Zt0b-S$$PzCMZBlgO-g$!1jDNYaU$#Nr7O$rTO2w3BsyZCAVraZ7OdfoIpsvFqKJ7b$bLuvSJJ80SLTQoW2Rr@TECT2qB#WnNOOgJ3AZXmbj5W9P7m8BMEU#PWZxo#e*K7Zo@hNdZGRE%FXyRwvx5ZV2uI3oZ@WYz4pMllr2uBM%*yUU51dx0e7WzpoE67jo2p39O1zV47doxER%8REIoyqwVKYTNsu%39cKTX@wH#B9kPxIv45ey6WZNGh8jQLxpG3kY!wkRHdWzFtlK08X2xYOd-8F1Wx_EBXRV3eL9LCzeEEROIRT%bF224I75nzKy5kkmAgP-!GlR$CRWmpjH5WJX#8vnirxFXZRFxfzp_Np$TPG74-78I!cf_r67Gm5KeG*dxlg-Wnr@@BzJ10%Qg$r%81yy!!37hH5eUkl%1Oy%a3b8p1r_rXf@!1893-EBS$@$bomABXuZmWi6!5fCJbVKfuOz#IvMo!1OG9ySLZOELit2OZB7lud#z2*3OtleshvqkTel5HFL$UO52M2OPIhlBu7TOs%i9YYC*6LBIk$R@mBX-lktwHao1OLwjvx$XQqFrUrkIKWHfzrYkEI0f6RNAxCrE*w*o5H!!M5RjIz9dzMGeFog9JmImUkRS9NqJ*coUDDH0To*!BL3t8T-qhpk*8Smdg7ze9cjJr!tOB4GODHKIOFpTpRZwQB7ZgD47tQ72Y2uyVL2a9qbe0hf7NLcl8323gyaij7VVHxPvfJTnK!qXjE06FciRXsFZmcQHDMHVTSa*mrnq0KERne#SfPiaCiANzWJW5KCQiaPYF-iO55vlPJIL_CWpi2IPBl6Ol9blx5zg%N90%xiYZMZL8gjRSlnJ%TL2lmvhUi1wXBTYL-6asZbLvhfOI2hGP8VBDsFltm5!L8GQMMhx-sMw%OYlcfx-S*aDhEL-an!8PPW-e1h4Y%4#dy%AFTK$KIxD23YuGRK!*9M#zukKC7XIrxKxA76aeXA@d%aZPDFH-@NjhQkafKPIS_RQv@rZmawq@Ik2@@iU*b1l@d5!HXVwl3kIBCxjXwb9@Y$**_HVlE_tdwvb6S3UUIgRQI*GU@oV1G@wwX%n7H8LZRSt_mlnixv41Sgl00O_RjcnhazOAHwcg$WanE7O95U_DFnnuFh%_2yyy!TGXsnZ9Um3t*HVUKcOHpA@Pf8RDPBN*I%rgQao$@mJf6N0Am8kf*rwA2zXbjpB5H0yynrId_Mv6pG%o8KicIdj#g6Hm#PO0sHhe6wxVmJ@U!uz97K$2_2nqW!@XdSwH!L!wdUF#TUPfpyOTU01hNcLtq$mzic6U*rcirdA__2$2$CuMt%%07c0d#OnA9dlWNBrAo8D0ne!$o5nAQ7rZc*EcAvOT2sR@*!QYGDiCH4h0P#aT#1Dsz*@iAh@$obCJTgRyozvyCdITt8VpnlSv3sY1oxBKy4zXcMHcc%sjbU04NcHYudWQ1C8XFs%rdnPPXc4iVBM*bLZR%OtWP*g0os-QSYC_Hv-wjg2DJSUD6kTH2DlPaR4PuSb_91S_qSTY%5yj$-w$MvvaUEnmYGZ!9Dn*KRFK1Jzm7ta*9$nV-bBRdNHVuTo1dK3mcNV@Kg4gFWyv#d9QUxsQQbgLpKYKg*SRZW8oFVb@w1q-g6z1oOHy*6KTr2z!kMef%28w$098f1#7FXVrM1#R6*$w#En6XnYePjHLsQsYZHvxvkhAJELX0uejB10ua%ddKaq7Ff8tbHZnp38BnujV2*HsJzqFpd6fbNG$7mu%a58efe1$GWkzsGHRT02@@ZIClL1wza2fCACiQ1Ox68y03Eq!fUef9Fs5eNo_nJRx!OV1kEYJUdIF6FD8q7wkMwwpAcKJhT%TvZn$joPCOtztT%U2ZQQk$o353mKZQfTtgtasy9S1QVDbxW5M1CRhoJ7@ZW9I8lS2Fr-v05NBGGt75-fS_3yl91s3El-1A36ZYU1@z2dtiM%iKemk4l855Xu-t7atZZ08eT3iKyq$y07Xy3Aba*lAzMQPbztpLHjAZNNC1GZ_RO9ILjjoQPeMyiUO0l7L6WNw2I1BH9mHT%s!3Y1qB*FIGrDnrV48xiOQ_J25p1EiJIazBU@x@WL8upv@#eq*wJLZQNdRDWy#ex5bjkjpa38nVhZm1TNW5g%2G-1A5LnASfjKv0BJ975_9ii8rjzvNzGx#xx3RlRejF6uU*F-MrlN%CLryVH%QuD2M%R4GjNltEsjkkNnZpWkJuTt5CFb%qRv#V%kCZ4VCsp!d-!s0zo15RwZpZMl70TbE*3MftV@wKMcLDVZ2_DPGVeDqu27DA@#6oXRuCPn*KWhd@skM4s%@TFurJ-!MUFSFKB9v!LlF@RqDeL@W*@awAQF$ssafCAc$v!72XLQBzuVRmZo@qzXCZx#POmuWYc6dUZ5@xzn!gJey!f5iN*PI5ddfb-quU%7voenOZKEljHGYMmoeWyt3fnyMkL9Pqcxhp8zR$5ikd6fw2Bfg74$qf!pK7fDr6Vx%hj114GgneWoxOhJHeQWfV9Epr*L#q2CtusUOAlhiH3Ez868nBkZCCMPKyZao@rU27pMs7tXzsSeOO1n43Iz0BjcBiV4zVmy--iN9G!*Awx6FOlSCy#!38NuBLIWUSnl_ujdbNteATc_in-hWzsDsd5ehaw*N6J6tEzeyckPSH$OQFu5yJhdR_qcmjmSe5J5TZUt!9vkafaPNe@lnHIiKD1nBmsdnXJ8IU$_cMCNp$0YB8hNfoNV8QSUlznkaTh5Ayr-PZDErpV@9w*gaBKPmI1H#h3b5dEQuZnDSAnuCgVCT@enAx_3OYyBu9M5%#TkYKlzrkhp6zz%SpyS4lZmBEphtsPFYsPE@2a9KWPYePRaQHnB$D@vryjR2jgPWrQai37*O@tdWjzOqYizcAhnZMwvUfbZd9XHsRQ5zn_I5aE*FHrVUP8X6rTGEhn*Wt_vg43*zOcte-lqXT6MioeFTJzpcVfJ*MHjf555yG3EMt61NC6JCuGP8jeAvS6XmuLFRGZdA-Lti36dVE6nUDn_6yZVP!H_jpRiJJOc@mVqSYnn3NV0ei4BBjJTYe0@rVMHzF3w77$AHW-1$WvT7r1c##VOF_uhH$ddx5CJpR6IsPngaMKdoF6-VULmV*yPh$$nXNhwYrYLu!G_hd9$p0EKQtNg*!kvdhNFvdTvCqqMCtIVWPJ6aQNVZzb*Nr$UcGkbXdilab_w9DPy6ht!YP2G#3zTP$N1bJ_%hdgS6lG*KMcyLFRjoXaISAUg5fbRd5od*2E5QR0CBmn6atFXO0ondAS2O@iwI5ikU-EMS*#XEpWtt7V5Ymh7TNvjkq#ZQyCvzLT2tchy2qBFu#6-aNh7MVnjpsFY7_qwOvrgtAB#BwOKTH%okLCPTzHVkMMuT3F3UaEu0-!ZmY-2dI_khSjgKwUiPQK-mVL3xcz2wmtW-f$ZA99SnAUiLpNRp4!sWiDrA2yg-D#BSi*jvhj$YRKWdqM6VxPh$MlZs%r0tP5q#9PvG_KG5*z57t$Bnqm$NqrdANFr-@6PbWLj6v3XWG@SLr_q#jauMTr8u-*2YUy!Wep$cQoJhmumsHvWDn-O$OmT1Z1LsEk_60sgz8lX#UHKjnORXnVy$paWewrD#cJ1dtPEsC%YaJ$Cm3bcWLIlM4b@LzLpj6kHQ70!wi@0qcjPXXnuO!esvp260QU31Yo*BOOmxmUo*dDW9%Svui9XlV6_Ta1Cu7VVi5BvyvXuf*aEiZlfOtalRS-j6PgvZt@PTpv-xE_WK!VEqHzFlbj0KsZuVuYPfEeXT-W@R8w9RsaTDA@!Br3@bwaslTLU2$j4aNqXa#b6kdiv51_mMehrWeX!%d*Zi2ynhhJhX6h3MKtUJ!wzQsss5W2w*-kRGOkdnTkJlbLGEhy2qvSDUMOgjnOCl!#5LiVH#6VjfzP4808_srBzB2FCHGks2K#-siLEOsGDi8Sts@-P2Zt4nlX6mWQGxnk4j*KXArw6wWQPUuAt2k_1zj*c0aawOOw2O0Km24$o@2YHDL9Le$kTQGWTkTNfTenahR!YP9wvy3kdmv@Q0I%0$EU3RtwXCEIZTSb-kmi8*-uHDMacWZFEBLwqZgirG$89gd4HhKoA7ydoM#8P_pS4WEJdr5Z8M2b2C#g%AfDa9#%rS*xgYtU5fX$DG1IH7nkQuA8uq-vQ7KV%Ea6Icu0suJVBoEAzBiEDUV*Gjnyaz!#LNVTcccYC*ENINnpmsrLJD9OZqnqz5y5oa%dZ62hY4ox@2-2Bs7S-z-_-v071*1u-js0qTH-EWy8kipP#lxxKgnQao*fVo%3MNRSNkpk#kYC@OfZlwTM_e$VVu#dJAqj*v@y%eSN7HwVjKTMG*cyvxE5JOLRXd#OPIc#f0g7MiG!6HkT3qvzd1kMS1jGaeTn2YIL7%Tf%BuUG_bGBFkqJ3J-%poXF_6KFtZX0apjZ42gHDEy_#f@GxQ6q_NlSENU0kHPg9oW-UpSMa7j!NzWi04Igs5Q6EvlP18iY#-Nt!SV17N_R7Tm0_wMI#6ACdKYiXMqn7aZfolLeTSGzMRQzbrUTCuYCR3N6b@PgY#@yf36#g0KCM#W$eVrtdDEX8AiO#kY@9RpEG-dV1nxCDrmR!O9-xCp9Pz5#UZ5hQC3BGyETr4uZqYorNqVnk_N6GnyZISf!amSM_gc!#Jtn!@6o3EvtLmNpQ!$a3WTb_QrEcpMAxjRAouaRM67#N7FmD7S47wJTbxjcZrp145Z#S2ccrWXu*yhdh9w43t#jjjhqb#CP22lPTxq5m3HztgnlROw9O2r-5629wZhp5KY8NZ0UI7wgNuXT7EXrm7h*7TW2t1yi-#zTtDhNk1nehi5oFgSVp_fk74yEW4kPy9@vn$7epCB@lOGe!5#R@ihmPrPgxE%MP3DtzPVCo5SsqJf2mmJy@cAjCK5F-v8lLx1Qw_F6ZKq9HmWVF-1N8p4ujBN8cjNReuo#9YhQXC7M8SHAdrp_kdHPKiNAfT%2hSXhF8Hc8A0jbaL6B*U8%zRF-8A-g@4CXsaCr%KFc%VdhbdS3UiZB65bJBPmj_y5$zY$2EZaKxGVt55$E0jcoYDjJ4M!7h6YcOT2#$bZFh0X$WgWvc*E1ZJ!o9z*sygU2Qy2gXhAr_q4kv-yh9LZwsXSlWc__*g#T_ESey8lSYa4moEJtf9-KNfz@-qyVWhZq$u0CZ%5$5bc5@Gfu0%ICB97UP5$EG6ip8Q1T19S7fTGHX%yvi3hh%#vT6MJ5p$Wou_iy_5*La_Jpd%M8933qb6gWfUViC0zA3lDpCw5ggY4AD5_Bywk$QVrk@va__C3$kLuTPfZ!GsRXjyIF!j#_XtFVgi9inyURICHvoZ%pGtKsk689tJ3u98BbmNI4PP6JIie10V9p1i6V4*-G#fWbwsNup$%hfHcJ#-mykKPOPkVb5M3F3CJIDk6T16BG#xF#NT!LKFJo3HQ5PBRXNcl9fSMSy8%CnQTh8lS$6ZmgwP$y-8E26-Z-#9PBRZqJ*pOr5s!446laAC7ulZ4hS9Gjs0Q-NZw1xE3p$-q5dzJitKaA#3L66daSr*YU-q5qGPjpZ4lGebLvbhKem06u$@OuanWHR5UQ7tEwOp$7Ely1Ea_hl9Y_F5nAtu*jSZLZ4md-kNNpLEMuNwM!RHgqvHdnsYHR762rDGTVfepdS%HiJPWIuKxu018lS5I5dmTeh#vVAsrZ@G$$w5LdNL*%RI9UIa1FCG9tvRttZv@$wSnt*tNUloSR0Fd_X8_7!dqwHnR0r2QjU!!a_TTP%n@xQFlTm-DI14Z8OZV8qcUF9BOQxFylS%MB*%qP716a3Kfm9Z3PaeSfM8NLPbZhOY7ERuRZYZq6mx-reIuc-0tBQZyYx6hR#NitHZ1ao6vWbkdgc_1VKjXGwe5SQeI1O!_0ts%58mr9QqxG6rvbN6Dg0Dt*fVmqjxRAcKyVK-3opgfojN817Vo5lKu2#AVDETiGpwQdCTbuo%FL9kKsz1cSEF*CrMf$5SP*PtyruOf#Rgm#SU#8yZQWek40YavvBSRMcWM!OtY!8ly9zYAjqoIw-BbN796ccZ!Cxk@3@x9pBcbslZ-EDqom%di61q8IHqxaahho7ARC2Mz4s$#EBI-ZRUGdXnPyygTf4MOAqJ3MDeBi*@$KPZdQozTW%uBGyWLO2HY1Qk-CRN!dHqK@oxw0H_fDxRa#Y-rF_55sK1rdOwmJgtB88jmv7LwetREYv$ce55y0owaXr19MyHycex%oxxnlDcZblsFkGpiXUG0HVgABJyTGHj%8_C!$SuOS5Wj--SJ0yC*hmH-ts40LJGzzdm5alEWoP@ql*ya9l#BRk9b8x%ebhN4ILK%Fo@hbp%h7WRWUow9yrlxPZtHU7SFw@$jsgiK*5vG5v3$Ag$@FkY@nt5k@ZkSAilM5n5UGlcy5x42EZAgCzv0jt-$dcz2Fy!gGBp_Qa#okwcQe8RAjscl-FzPh-wqTYAh!25zHKJ0JOwvYWI-XElIyb-fW%k%gM$4UaP71-zCRjc#iT!SGLPvJI5nEGTz0eXL3T8a#vgWAY7TExdV8iakcJI!luUFXgL0IR*9T_Wo6Rf0*c6U8HjkkPz8FxD!J0!B*WmeMY9%w00PbzcIrJvNMfDV6ogi!SFePOVp612N#xvKX#CNJfiYUFgtUBgpgZyZ%E5OZzAqqinMS-#Kg4skYkf6nZmMu#JwF4%wX!xcvrPG9#BvLcE#EGy#a%K1vnkt_*oS%fT*EK_oqmdi-I8%0Q3zdjCbD6lBMlyHB-qlUj4LwI_Mntw#wibH*3dX*fJLQXb8ybNO*#JQ-tAIx6I$-ApA1lwy!wbTaYhzDsHV%%w1T*4CLCmbxORG-Qu6g5seV3f#6dcR%3O7TQb1W@vp57pDaNu1!n#aENE01foSs9$zy4iMlvDuZk8ZI8*0t_W$9g@eCGoMEOi!_8S3Sj96c_L!Bq5pZCgpwmbD#vkjekJtOdyFypkyCLVdv51Mj_$SYqiP9RQ3Dv9!r$Y-8dYPzEHofb$Wb-XfvK*LaN2h58dMozSYZq-sNi1_BOmgk2Quu#*LJB9oNZs*UifRb_ArptK*ASy*WWrZNs#Qc*XurXc%jhhYHRxDFXjCkapehTbEAqYN93@Yp8iIjcdsQGGMj36OPFbCtaw6W3Z2GgpbU3c*lInDNYcj323%WrvgAdcUp!8EMtysl4tmjl0uUStJWrc0zDNcbrq7cvsmdsR_6tsU6@mELSvo7Vu-PEmvBsg6vNHf8t75r88rDj%5gxb7F0D6iKRIAk$Oh-3nxWN4gGPruX!MemLv@x%JhxU7qAkVj_JNAdO1eb2MoBYasLrF!DCDGXjxQv9GC#_LYx7_#*mts99iFIiCMx4UiqTSNoWf91#DB9_8*cp4n9W5OW0G0FAZJkq-%@HJnWP_T-0_MnpmUmmEdX0TKu%zTnd!F3QUMji*TNHjC9E5luifrIeCanWHK9#FU#wzQZfX15a56$Mf9_S6P%tJMkv7fghLlO8#xAvo7t$6@AcilE9@73xsV7ex01QQBnSWnM9obSrA6uiXIELHk4OctLrn$jR4xCUXMfdrUEy0!Rh5VS5-4*8-tyyDJxJrsL4naN$!d@KngwXlZR6*_ItWrgF8CNov%DC8$3h1@1k2ysXgX7g3sej91PEjGobUV%_-aR@A3DmCDfWhS!%#w*j@U6ibJ9lFIzhtuikQ3gBx_c0mhrs2WHA!JBcgwGjLjQi059HGvwGdqIbed9CO*71oITUeo4$xm9oI8lsTyDKxmS_eEaMyoQSj!!jekuXsNBtNKcPBaENSqq8URM9Z$kNQZ4Ov!WYGWJdEnzXER@RC$hJg4MguPFmSWPpwhRp*XY0zduaQO_gtCKeT$VWgLhQ-F#xWz3W_65TKeZ$Ru2LLTvFWum5clSGa49xJZ_jTsHRlMCVUXhkso3JDY%JmdTf0*_k9o%pCF1A%eG3Hg4kIFNg$tNCdQqLmZP5U@SBykDBO5f5SWP%JMcBTQsGEUWsK*to7Ff*YTfuHSv69k0!@FLvcQeHou0_s5KA#LmXE@rIpKM0_62dscIYeZ_6NQc1!XSenwV%J3GL!QtU@At*Ti9E$pat4IaPF*HofEwcZeO7rWv2ERcq@PcY6IFaiezQPCKnza%#*B-iVv$*ooC9FMND0mFpfHbi!xg#lAk#TK_exHr9z14ITO7bBRP2rkufs*vHT_UpbsHAyouBUHSzmWw#aq@%BrLNOMq*SR7#5x9V2ufw%JT*P6NUJaGVsYek4DAA*gp625fsTCYd6GCj-e8bHd#77#lqMK%1G*eu9jPvLj_ddkbi*bK!wt#QVc3tNb2@iVYn%-yiC*TzB21puTq8ho@xos%F_HU%L!1ckjFCsR3pwmiO2ZWMnsdRxNnhi#M7hcMok@#0KNrh!xFu*eH2i!4n3nO!ilPdxMNsb5j9*bDBhnQpwwLX!0xiouwVT$0MubpeJuwrLxY53vldji2CM*QVET16klogyXLRhag#y58X_5yzXTW!497W2Ds8rIy_3gU4g7tJIOKhWE5RrA%@n8X-v_XxYf6s8nLP5qrc$Z9Z$Urow4tlg@34!5_PHqg93MiIjxFTGzju#v@2vrQ6qy2rIJGn8o_-6X3JcgDQt#pMAnOA1Erl-rEtaKXS$XFFA#!m$N_XLPJ1FXV-5@Mcxj_VZErhUOAlD0ty@Y67SJHi#rF3IH40RTYw!N2CFA5VhEiYHhv0UHh%81#qEON-iV*wB7qrUCg#b42v9U#7EYEYJtiTCzg7d_5ApVmQ$_ppA6QzZoH-wUgdRUr%c-#KDRnnm*V_9WJsbj15S5QGUp5laU$tlng#f#mKV5pQks@AUXc@S5LnRD6idpH@mHmI_aUBCcK2jZyJi8nZcd3U!lqpCmC6k4zKHjZdvrVkmEYQV_2kScjw$PnerDC#9N%h5O-woMM3prmtjR1ovpKkJNV!wE6MXOXWm0dnFyDO_vMh1YZsUV95-hYt6aa$P!R*0YgE1jVicp4-eorlC7#URclrooIPBiRMiKZlAKBmRoUCT4%boj2%C*ZNsNu1855tQ@ri*AX9B*6XASb54AGhbbyRe@YMrnLndouz7#%q$qO8mjnEfdLLGTTbTu30C%mR8FC2*GPSgH-d$Kydpf0kt-DOKDz3nVnMF$ON64S3FD3$gE5enBTorFbmFe*GB%vlwL#6I4M9HE-v!-FUQaboEsPbFjQR$Sl%oUc0kWaB4j$RtsbwbL@Hdge$3x9!!LH!N5Wy57%$*7Sx#55MI3R*1V_ETGGQEC$4Dr9Elz#asUDikMInF5oIrvg5!WRv0kNy-PPEmkbfrUw7UalG8_I3Gwp3$gV-5qYL*9PF6%%qpP_g*$%2$R780$eaomgq!i$$9dvh7JqjHOu-75z5hgz66S!f_QLqHyr0zZPXgmg5Ve2q4-Hrexa_t8T9CN%1Dd4JRDTxa8kAJVxh#vsf4F1#19ZS6qF*r1okBEORDg5XWbD#7k_fhB4eAJ9G@XIE$aTqP9hQ2bzkLvFpWr8RQ!e3mnLAS_KrA$HuJ2EsOBnXx3OuP-Csu352wVQqKG88TCxHe8l1T83y-uE88@HheRXP@7tlN-4iH34JVaOdiy%p#opJt2-C1l6YqxUixqvMi2Pu1UZDM$yWAKGNIxn5Z3aed3M93jdKI-DydRHR1%-CAHujqaeoYK*eqddn$XA8rKSwRnoMds!Z9KlhkvbbAxT@*9qipbrYynIk
