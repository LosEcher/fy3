//yanguan.c

inherit ROOM;

void create()
{
        set("short", "ѻƬ��");
        set("long", @LONG
һ��¥���߽�һ��������ԭ��������һ��ѻƬ�ݡ�����һ����Ŵ�Լ
�м�ʮ�����Σ������̹����������ϣ��Ա���С�������ѻ�ݡ����濿ǽ
���������Σ�Ψ�������ǽ�߿յ�����ûʲô������
LONG
        );

       set("exits", ([
                "up" : __DIR__"chalou",
                "east" : __DIR__"danjian",

       ]));
 set("item_desc", ([
		"ǽ" :
"ǽ�����½��и��������ƺ��������Ķ���\n" ,
		"��ǽ" :
"ǽ�����½��и��������ƺ��������Ķ���\n" ,
]));

       setup();
}

void init()
{
        add_action("do_la", "la");
	add_action("do_la", "��");

}

int do_la(string arg)
{
	object me;
	me = this_player();

	if(!arg && arg="")
return notify_fail("��Ҫ��ʲô��\n");
	if(arg !="huan" && arg!="����")
return notify_fail("�����ʲô���������˵��\n");
	
	if(me->query_str()<=80)
return notify_fail("������̫С����\n");
		tell_object(me,"����������һ��������\n");
		{
		message("vision", "����һ�������ֻ����һ���¡¡��������������һ�����š�\n", me);
		set("exits/north", __DIR__"midao");
		remove_call_out("close");
		call_out("close", 10, this_object());
		}
		return 1;

}

void close(object room)
{
	message("vision","һ���¡¡���������󣬰����ֻ����ع����ˡ�\n", room);
	room->delete("exits/north");
}
