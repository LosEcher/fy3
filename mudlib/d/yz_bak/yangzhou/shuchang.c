//Mr.music yangzhou �鳡

inherit ROOM;

void create()
{
        set("short", "�鳡");
        set("long", @LONG
	������ȫ���������鳡��ÿ����������������ﲻ��������
������Ҫ֪������˵ɶ���ȿ�������ǽ�������ĺ�����������Ҫ����
��ǰ���ǵ����������������𣬺�Ӣ���¼�������Ҳ�в��ٵ�����
����Կ�, ����ȤҲ��һ����

LONG
        );

        set("exits", ([ 
                      "west" : __DIR__"pishijie3",
                     ]));
        set("objects", ([
                __DIR__"npc/keren": 2,
//		 __DIR__"npc/obj/mud_book1":2 ,
//		__DIR__"npc/obj/mud_book2":2 ,
//		__DIR__"npc/obj/mud_wizard": 1,
        ]) );

        setup();
        replace_program(ROOM);
}


