// thd:kitchen.c
// 97.7.14 by Aug

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�������һ�ׯ�ĳ�����С����С�����ʮ�־��ɡ���Ϊ�һ�������
���࣬�����һ����Ļ�ʳ�ؾ����ضࡣ�Ƶ��������ˮƽ���Ǳ��һ��
�������ף���Ҫ�Ե����������ƵĲ��ȿ�ʵ�ڲ����ס���Ҫ�����Կ�����
����Ҫ(list)(yao)���ݽǰ��ſڴ�ˮ�ף�����Դ���Ҩˮ���ȡ�
LONG
	);

	set("objects", ([ /* sizeof() == 4 */
		__DIR__"obj/pot" :  1,
		__DIR__"npc/yapu6": 1,
	]));

	set("exits", ([ /* sizeof() == 1 */
		"west" : __DIR__"in_road2",
	]));

	set("no_fight", 1);

	setup();
//	replace_program(ROOM);
}

void init()
{
	add_action("do_drink", "drink");	
}

int do_drink(string arg)
{
	int current_water;
	int max_water;
	object me;

	if(arg!="water") 
	{
		write("��Ҫ��ʲô��\n");
		return 1;
	}

	me = this_player();
	current_water = me->query("water");
	max_water = me->query("str")*10 + 100;
	if (current_water<max_water) 
	{
		me->set("water", current_water+30);
		message_vision("$N�Ӵ�ˮ����Ҩ��һ��ˮ�ȡ�\n", me);
	}
	else 
		write("���Ѿ��ȵ�̫���ˡ�\n");

	return 1;
}

int valid_leave(object me, string dir)
{
  if(dir!="west") return ::valid_leave(me, dir);

  if((present("meat", me))||(present("doufu", me))||(present("zhou", me))||(present("baicai", me)))
    return notify_fail("����˫��һ����ָָ�㻳�е�ʳ��������ȥ��\n");
  else
    return ::valid_leave(me, dir);
}

