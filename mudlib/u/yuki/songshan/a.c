// Room: /u/yuki/songshan/simen.c

inherit ROOM;

void create()
{
	set("short", "«��������");
	set("long", @LONG
    ������«���µ����ţ����ű������де���ľ��ס�˴�롣
�ſ��������׷��ԲԵ������������壬ż����Ϊһ������������
���Ӵ֡�
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"luyansi.c",
  "west" : "/d/songshan/luyanpubu.c",
]));
        set("objects", ([
                 __DIR__"npc/xianhe": 1,
                 __DIR__"npc/lupan": 1,
        ]) );
         setup();
}

int valid_leave(object me, string dir)
{
        mapping myfam;
        myfam = (mapping)me->query("family");

        if ((!myfam || myfam["family_name"] != "��ɽ��") && dir == "east" &&
                objectp(present("xianhe", environment(me))))
        if ((!myfam || myfam["family_name"] != "��ɽ��") && dir == "east" &&
                objectp(present("lupan", environment(me))))
        return notify_fail("¹�͹�һ�Բ�����վ��������ס���ȥ·��\n");
        return notify_fail("�ɺ���˵�������˱����صأ��벻Ҫ�Ҵ���\n");
                
        return ::valid_leave(me, dir);
}
