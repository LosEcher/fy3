//by enter xiaoya

inherit ROOM;

void create()
{
        set("short", "��ʯ���");
        set("long", @LONG
    ������һ����ʯ�������ʯ���г����������͵���ݣ���
·����������������ż��ô�׳����������·��ʱ����Щ����
��ʿ����ȥȥ����ʱ����װ�кܶ����ӵĴ󳵾�������������
�ϱ��ǳɶ���������ɽ·ֱͨ��Ŀ�¡�
LONG
        );

        set("exits", ([
		"northwest":__DIR__"sl1",
                "south" : __DIR__"dadao6",
        ]));
	set("objects",([
		"/npc/man6":1,
	]));

        set("outdoors", "chengdu");
        setup();
        replace_program(ROOM);
}


