#include <ansi.h>;

inherit ROOM;

void create()
{
	set("short", "��Ϣ��");
	set("long", @LONG
��������Ϣ�ҡ����п�ʯ����ɽ����ɼ���˯齵�ģ�������кܸ���,�¶�
�����ˡ����еĹ��ߺܰ���ֻ�ڶ�����һ�Ų�֪ʲô���ӷ������ɵĹ�,����
�Ļ�,��������˯��һ����
LONG
	);
	set("no_clean_up", 0);
	set("sleep_equipment", "ʯ�");
	set("sleep_room", 1);
	set("no_fight", 1);
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"dongzhong1.c",
]));

	setup();
}
void init()
{       object ob;
        string classname;
        if( interactive( ob = this_player()))
        {
        classname = ob->query("family/family_name");
        if(classname !="������") {

        ob->move(__DIR__"dongzhong1");
        message_vision(HIW"һ������֮���Ѱ�$N���˳�ȥ��\n\n"NOR, ob);
                               }
        }
}

