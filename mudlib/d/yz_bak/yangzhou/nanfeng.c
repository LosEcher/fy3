//Mr.music yangzhou �ĳ��Ϸ���

inherit ROOM;

void create()
{
        set("short", "�ĳ��Ϸ���");
        set("long", @LONG
	���Ǹ��Ȼ���Ĵ�ĳ�������Ц�������������ҳ�һ�ţ�����
�Ǵ�໹��С������Ͼʱ�����������������������Ϸ�����

LONG
        );

        set("exits", ([ 
                      "north" : __DIR__"duchang",
                     ]));
        set("objects", ([
                __DIR__"npc/duchangxiaoer": 1 ,
        ]) );

        setup();
}

