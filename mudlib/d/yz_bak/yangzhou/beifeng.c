//Mr.music yangzhou �ĳ�������

inherit ROOM;

void create()
{
        set("short", "�ĳ�������");
        set("long", @LONG
	���Ǹ��Ȼ���Ĵ�ĳ�������Ц�������������ҳ�һ�ţ�����
�Ǵ�໹��С������Ͼʱ���������������������Ǳ�������

LONG
        );

        set("exits", ([ 
                      "south" : __DIR__"duchang",
                     ]));
        set("objects", ([
                __DIR__"npc/duchangxiaoer": 1 ,
        ]) );

        setup();
}

