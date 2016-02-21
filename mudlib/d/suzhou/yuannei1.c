// Room: /d/suzhou/yuannei1.c

inherit ROOM;

void create()
{
	set("short", "ʯ��·");
	set("long", @LONG
һ����ʯ���̳ɵ����ȣ��������������׾��԰�Ĵ��Ž�����������Ҫ��
ȥֻ�ù˼���ʩ��ǽ��ȥ�ˡ������Ǹ��ĺϴ�Ժ��������Ҳ��֪��ʲô���ڡ�
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "suzhou");
	set("objects",([
		__DIR__"npc/wushi":2,
]));
	set("exits",([
		"east":__DIR__"tbgju",
	]));
	setup();
}

void init()
{
        add_action("do_climb","climb");
}

int do_climb(string dir)
{
        object me=this_player();

        if( !living(me))        return 0;
        if( ! dir || (dir!="weiqiang"&&dir!="Χǽ"))
                return notify_fail("��Ҫ��ʲô��\n");
        if( (int)me->query("kee")<50)
                return notify_fail("���������������������\n");
        if( (int)me->query_skill("dodge")<50)
                return notify_fail("����Ṧ̫���ˡ�\n");
	message_vision("$N����Χǽ���˳�ȥ��\n",me);
	me->move(__DIR__"zhuozhengmen");
        return 1;
}

int valid_leave(object me,string dir)
{
	object npc;

	npc=present("huyuan wushi",this_object());
	if(dir=="east" && objectp(npc) && living(npc))
		return notify_fail("��Ժ��ʦ�ȵ����ȹ������Źأ�\n");
	return ::valid_leave(me,dir);
}

