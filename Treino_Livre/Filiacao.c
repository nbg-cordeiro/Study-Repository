// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.filiacao

struct tipoFiliacao{
    char nome[80];
    char nomeMae[80];
    char nomePai[80];
};


struct tipoFiliacao separaLinhaCSV(char linha[240])
{
    struct tipoFiliacao filiacao;
    int i=0, j=0;

    while(linha[i]!=','){
        filiacao.nome[j]=linha[i];
        i++;
        j++;
    }
    filiacao.nome[j]='\0';
    i++;
    j=0;

    while(linha[i]!=','){
        filiacao.nomeMae[j]=linha[i];
        i++;
        j++;
    }
    filiacao.nomeMae[j]='\0';
    i++;
    j=0;

    while(linha[i]!='\0' && linha[i]!='\n'){
        filiacao.nomePai[j]=linha[i];
        i++;
        j++;
    }
    filiacao.nomePai[j]='\0';

    return filiacao;
}