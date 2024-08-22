#include <stdio.h>
#include <stdlib.h>
struct chiffre
{
    int un;
    int deux;
    int trois;
    int quatre;
};
typedef struct chiffre chiffre;

void start()
{
	printf("Content-Type: text/html\n\n"
			"<html>"
			"\n\t<head>\n\t\t<title>\n\t\t\ttest_cgi\n\t\t </title><link rel=\"stylesheet\" href=\"design.css\">\n\t</head>\n\t<body>");
}
void body()
{
	printf("\n\t</body>\n</html>");
	
}
void trie(char *ip)
{
    chiffre ipv4;

    if(sscanf(ip, "%d.%d.%d.%d", &ipv4.un, &ipv4.deux, &ipv4.trois, &ipv4.quatre)==4)
        {
            if (0<=ipv4.un && ipv4.un<128)
                printf("l'addresse ip est de classe A\n");
            if (128<=ipv4.un && ipv4.un<192)
                printf("l'addresse ip est de classe B\n");
            if (192<=ipv4.un && ipv4.un<224)
                printf("l'addresse ip est de classe C\n");
            if (224<=ipv4.un && ipv4.un<240)
                printf("l'addresse ip est de classe D\n");
            if (240<=ipv4.un && ipv4.un<248)
                printf("l'addresse ip est de classe E\n");
        }
    else 
        printf("Erreur lors de la saisie de l'adresse ip, veuiller reessayer\n");

}
void form()
{

    printf("                                                                                                                            "
		"<div class=\"container\">                                                                                                      "
		"	<div class=\"square\">                                                                                                      "
		"		<header class=\"title\">DETERMINATION D'ADRESSE IP</header>                                                                    "
		"		<form action=\"affiche.cgi\" method=\"get\">                                                                         "
		"			<div class=\"row\">                                                                                                 "
		"				<label for=\"name\">Entrez l'adresse ip:</label>                                                                   "
		"				<p><input type=\"text\" name=\"Adresse ip\" placeholder=\"Adresse ip\" required class=\"check\" id=\"name\"></p>              "
		"			</div>                                                                                                              "                                                                                                            "                                                                                                            "
		"			<div class=\"row\">                                                                                                 "
		"				<input type=\"submit\" value=\"submit\" class=\"send\">                                                         "
		"			</div>                                                                                                              "
		"		</div>                                                                                                                  "
		"	</div>	>");
}
void trie_html()
{
    chiffre ipv4;
    char tmp[255];
    char *ip=getenv("QUERY_STRING");
    sscanf(ip, "Adresse+ip=%s", tmp);
        printf("                                                                                                                            "
		"<div class=\"container\">                                                                                                      "
		"	<div class=\"square\">                                                                                                      "
		"		<header class=\"title\">DETERMINATION D'ADRESSE IP</header>                                                                    "
		"		<form action=\"affiche.cgi\" method=\"get\">                                                                         "
		"			<div class=\"row\">                                                                                                 "
		"				<label for=\"name\">Votre adresse ip:</label>                                                                   "
		"				<p><input type=\"text\" name=\"Adresse ip\" value=\"%s\"placeholder=\"Adresse ip\" required class=\"check\" id=\"name\"></p>              "
		"			</div>                                                                                                              ", tmp);
    printf("<div class=\"affiche\">");
    if(sscanf(ip, "Adresse+ip=%d.%d.%d.%d", &ipv4.un, &ipv4.deux, &ipv4.trois, &ipv4.quatre)==4)
        {
            if (0<=ipv4.un && ipv4.un<128)
                printf("l'addresse ip est de classe A\n");
            if (128<=ipv4.un && ipv4.un<192)
                printf("l'addresse ip est de classe B\n");
            if (192<=ipv4.un && ipv4.un<224)
                printf("l'addresse ip est de classe C\n");
            if (224<=ipv4.un && ipv4.un<240)
                printf("l'addresse ip est de classe D\n");
            if (240<=ipv4.un && ipv4.un<248)
                printf("l'addresse ip est de classe E\n");
        }
    else 
        printf("Erreur lors de la saisie de l'adresse ip, veuiller reessayer\n");
         printf("</div>                                                                                                                </div>");
    printf("</div>");
}