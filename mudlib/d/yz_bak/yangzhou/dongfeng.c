//Mr.music yangzhou �ĳ�������

#include <pig.h>

inherit "/std/room/pigroom";

string look_table();
string look_scoreboard();
string look_rules();


void create()
{
        set("short", "�ĳ�������");
        set("long", @LONG
	���Ǹ��Ȼ���Ĵ�ĳ�������Ц�������������ҳ�һ�ţ�����
�Ǵ�໹��С������Ͼʱ���������������������Ƕĳ��Ķ�������������
���ǹ�������������һ����¼�ᣬ�����и����ӡ�

LONG
        );
        set("pigging", 1);
        set("no_fight", "1");
        set("item_desc", ([
                "table" : (: look_table :),
                "zhuo" : (: look_table :),
                "ce" : (: look_scoreboard :),
                "paizi" : "����ض� help pig_cmds �� help pig_rules��\n",
        ]));

        set("exits", ([ 
                      "west" : __DIR__"duchang",
                     ]));
        set("objects", ([
                __DIR__"npc/duchangxiaoer": 1 ,
        ]) );

        setup();
}



string look_table()
{
	if (this_player()->query_temp("pigging_seat"))
		return table_str(this_player()->query_temp("pigging_seat"));
	return table_str("");
}

string look_scoreboard()
{
	return scoreboard_str();
}

int valid_leave(object me, string dir)
{
	if (me->query_temp("pigging_seat"))
		return notify_fail("���뿪�����������ж���\n");
	return ::valid_leave(me, dir);
}
