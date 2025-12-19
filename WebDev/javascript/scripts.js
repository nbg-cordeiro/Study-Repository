function squares(){
    for(let i=0;i<10;i++){
        let text=" ";
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
        text+="<style>.square:hover{transform:scale(1.05);}.table{height: 200px;width: 200px;display:grid;grid-template-columns: repeat(8, 1fr);grid-template-rows: repeart(8 1fr);}.black{background-color: black;}.white{background-color: white;}</style>"
        document.getElementsByClassName("table")[0].innerHTML = text;
    }
}
function goNext(){
    const pages=3;
    const htmlTag = document.documentElement;
    const currentPage = parseInt(htmlTag.id);
    let nextPage=currentPage;
    if(currentPage<3){
        nextPage=currentPage+1;
    }
    location.href = "page"+nextPage+".html";
}
function goBack(){
    const htmlTag = document.documentElement;
    const currentPage = parseInt(htmlTag.id);
    let previousPage=currentPage;
    if(currentPage>0){
        previousPage=currentPage-1;
    }
    location.href = "page"+previousPage+".html";
}
function goHome(){
    location.href = "index.html";
}