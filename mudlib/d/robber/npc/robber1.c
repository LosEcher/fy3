inherit KZZNPC;
#include <ansi.h>
string query_save_file() { return DATA_DIR + "npc/��ң��"; }
void create()
{
#include <kzznpc.h>
set("long","�������ģ���������ˣ��������ڣ�
ҧ��һ�����̹ܣ�˫Ŀ�����Ʊգ����������������.\n");
set("area_name","���߷ص�");
set("area_file","/d/robber/trees5.c");
set("ziyuan","ͭ��");
set("jizhi",80);
set("kaifa",6);
setup();
carry_object("/obj/armor/cloth")->wear();
carry_object(__DIR__"obj/hanyangan")->wield();
}
#include <die.h>

