inherit ROOM;
 
void create()
{
        set("short", "ʥ����");
        set("long",@LONG
��ǰ�ν���������ʧ��֮�����ν����������ܾͰѴ˴�������ӯӯ��ס��
ֻ����ձ�̵أ������׺�����Ʈ������Ů���ơ�һ�����ǲ�׼�����ġ�
LONG );
        set("exits", ([
            "east"   : __DIR__"chitang",
        ]));
        set("objects", ([
//		__DIR__"npc/ren" : 1,
		"/d/huashan/npc/ren-yingying":1,
            __DIR__"npc/shinu":2,
        ]));       
//        set("no_clean_up", 0);
        setup();
        replace_program(ROOM);
}
