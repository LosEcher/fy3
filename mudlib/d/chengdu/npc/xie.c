inherit KZZNPC;

string query_save_file() { return DATA_DIR + "npc/л����"; }
void create()
{
#include <kzznpc.h>

	set("area_name","�ɶ��鱦��");
	set("area_file","/d/chengdu/workroom.c");
	set("long", "��ʵ����ֻ����ʮ���꣬���µ����ź������ĥ��ʹ����\n"+
"����������ʮ���ˡ�ÿ�������һ����������Ʒ�����һ\n"+
"��ʱ�����ǵ������ͻ�����һ˿���⣬һ˫����������ʯ��\n");
set("inquiry", ([
"����֮��" : "���������洫���������գ�������֪���᲻���������ʧ������\n",
]));
	set("age",40);
	setup();
	carry_object("/obj/cloth")->wear();
}



