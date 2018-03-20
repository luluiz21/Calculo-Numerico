char *alfabeto = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ" ;


long int index_alfabeto(char c) {
    char *p ;

    if((p=strchr(alfabeto, c))) {
        return (long int)(p - alfabeto);
    } else {
        return (long int)NULL ;
    }
}



long int baseNtobase10(char *strnum, int basen) {
    long int outnum = 0;
    long int exp = 1;
    long int index;

    index = strlen(strnum) - 1;

    if(index <= 0) return -1 ;

    while(index >= 0) {
        outnum += index_alfabeto(strnum[index])*exp;
        index-- ; exp = exp * basen ;
    }
    if(basen<1||basen>36){
        printf("BaseN Invalida ");
        return -1;
    }

    return outnum ;
}


void base10tobaseM(char *str, long int inpnum, int basem) {
    int istr = 0;
    if(basem<2 || basem>36 ){
        printf("BaseM Invalida ");
        
    }
    else{

    
    if(inpnum == 0) {
        str[0]='0'; istr=1;
    }
    

    while(inpnum) {
        str[istr++]=alfabeto[inpnum%basem];
        inpnum /= basem;
    }
    str[istr]=0 ;

    
    if(istr>0) {
        char t ;
        long int i=0 ;

        istr-- ;
        while(i <= istr/2) {
            t = str[istr-i] ;
            str[istr-i] = str[i];
            str[i++] = t;
        }
    }
    }
}