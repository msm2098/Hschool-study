#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

    int i,a;

    i = geteuid();
    a = getuid();
    system("clear");

    if( i == 3001 ) printf("\nLevel1 Password is \"level1\".\n\n");
    if( i == 3002 ) printf("\nLevel2 Password is \"hacker or cracker\".\n\n");
    if( i == 3003 ) printf("\nLevel3 Password is \"can you fly?\".\n\n");
    if( i == 3004 ) printf("\nLevel4 Password is \"suck my brain\".\n\n");
    if( i == 3005 ) printf("\nLevel5 Password is \"what is your name?\".\n\n");
    if( i == 3006 ) printf("\nLevel6 Password is \"what the hell\".\n\n");
    if( i == 3007 ) printf("\nLevel7 Password is \"come together\".\n\n");
    if( i == 3008 ) printf("\nLevel8 Password is \"break the world\".\n\n");
    if( i == 3009 ) printf("\nLevel9 Password is \"apple\".\n\n");
    if( i == 3010 ) printf("\nLevel10 Password is \"interesting to hack!\".\n\n");
    if( i == 3092 ) printf("\nLevel12 Password is \"it is like this\".\n\n");
    if( i == 3093 ) printf("\nLevel13 Password is \"have no clue\".\n\n");
    if( i == 3094 ) printf("\nLevel14 Password is \"what that nigga want?\".\n\n");
    if( i == 3095 ) printf("\nLevel15 Password is \"guess what\".\n\n");
    if( i == 3096 ) printf("\nLevel16 Password is \"about to cause mass\".\n\n");
    if( i == 3097 ) printf("\nLevel17 Password is \"king poetic\".\n\n");
    if( i == 3098 ) printf("\nLevel18 Password is \"why did you do it\".\n\n");
    if( i == 3099 ) printf("\nLevel19 Password is \"swimming in pink\".\n\n");
    if( i == 3100 ) printf("\nLevel20 Password is \"we are just regular guys\".\n\n");
    if( i == 3101 ) printf("\nclear Password is \"i will come in a minute\".\n������ ����ϼ���.\n\n* ��Ŀ������ �� ������ ����Ͻ� ���� ���ϵ帳�ϴ�.\n����� ������ ������ �ɼ��� �ؾ��� ���縦 �����ϴ�.\n��Ŀ���𿡼��� �Ƿ��� �е��� ��� �����Ҷ�� �׷��� ��ϰ� �ֽ��ϴ�.\n�� �޽����� ���ô� �е� �߿� �����ҿ� ���������� ���� �����ο� �����\n���� ��û���� admin@hackerschool.org�� �����ֽñ� �ٶ��ϴ�.\n\n");
}
