function squares(){
    for(let i=0;i<10;i++){
        let text="";
        for(let i=0;i<8;i++){
            for(let j=0;j<8;j++){
                text+='<div class="square';
                if((i+j)%2 == 0){
                    text+=' white';
                }
                else{
                    text+=' black';
                }
                text+='"></div>'
            }
        }
        document.getElementsByClassName("table")[0].innerHTML = text;
    }
}