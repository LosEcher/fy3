//road1.c ����·
// by Xiang

inherit ROOM;

void create()
{
        set("short", "��ʯ��");
	set("long", @LONG
����һ����ʯ�����Сɽ�ڣ�������ͨ���ɶ���С·��
��˵ǰ��������Ұ�޳�û�����ɾ�����
LONG );
        set("outdoors", "heimuya");
        set("exits", ([
	    "southeast" : __DIR__"to_cd",
            "west"  : __DIR__"linjxd1",
            "east"  : __DIR__"dating4",
        ]));
        set("objects",([  
            __DIR__"npc/wangcheng" : 1,
            __DIR__"npc/heiyiren" : 2,
        ])); 
//        set("no_clean_up", 0);
        setup();
        replace_program(ROOM);
}
