// Room: /d/suzhou/canhe/qianting.c

inherit ROOM;

void create()
{
	set("short","����");
	set("long", @LONG
���ڲ��ü򵥵������������ţ���������������Щ�ر��ļҾ�֮����������
���������κζ�������һ�߽�����;������ʵ�ڰ�������Щ���ݣ��̲�ס��
���м�����
LONG
	);
	set("move",0);
	set("exits", ([ /* sizeof() == 1 */
		"west":__DIR__"dating",
]));
	set("objects",([
		__DIR__"npc/feng":1,
]));
        set("item_desc",([
                "����" : "��������(zhuozi)�ƺ�ûʲô�ر�֮����\n",
                "zhuozi":"���������ƺ�ûʲô�ر�֮����\n",
		"����" : "��������(yizi)�ƺ������ƶ�(yi)��\n",
		"yizi" :"���������ƺ������ƶ�(yi)��\n",
]));
	set("no_clean_up", 0);

	setup();
}
void init()
{
	add_action("do_move","yi");
	add_action("do_pull","chou");
}
int do_pull(string str)
{
	object me;
	me=this_player();
	if(!str)	{
		tell_object(me,"��Ҫ��ʲô��\n");
		return 1;
			}
	if(str=="ľ��"||str=="muban")	{
		if (query("move")==0)	{
			tell_object(me,"���ӻ���ľ�����棬û���飡\n");
			return 1;
					}
		if (query("exits/down"))	{
			tell_object(me,"ľ���Ѿ�������ˡ�\n");
			return 1;
						}
		message_vision("$NС������Ľ�ľ������\n",me);
		tell_object(me,"�㷢�ֵ����Ǹ���ש�̳ɵ�ʯ�ݡ�\n");
		set("exits/down",__DIR__"miru1");
		return 1;
					}
	tell_object(me,"����������ܳ������\n");
	return 1;
}
int do_move(string str)
{
	object me;
	me=this_player();
	if(!str)	{
		tell_object(me,"��Ҫ��ʲô��\n");
		return 1;
			}
	if (str=="����"||str=="yizi")	{
		if(query("move")==1)	{
			tell_object(me,"�����Ѿ��ƹ�����\n");
			return 1;
					}
		message_vision("$Nʹ�����̵ľ��������Ƶ���һ�ߡ�\n",me);
		tell_object(me,"�㷢���������ߺ������п�ľ��(muban)��\n");
		set("move",1);
		set("item_desc",([
		"ľ��" : "���ľ��(muban)������Գ�(chou)������\n",
		"muban" :"���ľ�������Գ�(chou)������\n",
			"����" : "����(yizi)�Ѿ������Ƶ���һ�ߡ�\n",
			"yizi" : "�����Ѿ������Ƶ���һ�ߡ�\n",
				]));
		return 1;
					}
	tell_object(me,"���������������ƶ���\n");
	return 1;
}
int valid_leave(object me,string dir)
{
	if(dir=="down")	{
		this_object()->delete("exits/down");
		call_out("speak",1,me);
		set("move",0);
			}
	return 1;
}
int speak(object me)
{
	write("ֻ���ü������죬�����ָֻ�ԭ����\n");
	return 1;
}
