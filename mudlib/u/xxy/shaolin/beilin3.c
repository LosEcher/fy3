// Room: /d/shaolin/beilin3.c
// Date: YZC 96/01/19

inherit ROOM;

int do_study(string arg);

void create()
{
	set("short", "������");
	set("long", @LONG
�����Ƿ������µĵ������ҡ�������С��ȴҲ�����ȫ��
ʯ��ʯ�Σ�ʯ��ʯ���������ڷŵļ�������Ҳ����ʯ�Ƶġ�
�����ƺ��ܾ���ǰ����������ס�������е�ʯ����ƽ����һ��
������ʯ�壬����������Щʲô��
LONG
	);

	set("objects",([
		"d/shaolin/obj/book-stone" : 1,
	]));

	set("item_desc", ([
		"table" : "����һ�����ʯ��ɵ�ʯ�����������Щ��ֵ�ͼ�Ρ�\n",
	]));

	setup();
}

void init()
{
	add_action("do_study", "study");
}


int do_study(string arg)
{
	object me;
	int    gin_cost;

	me = this_player();

	if ( !arg || ( arg != "table" ) )
		return notify_fail("ʲô��\n");

	if ( (int)me->query_skill("literate", 1) < 1)
		return notify_fail("���Ǹ���ä����ѧ���Ļ�(literate)�ɡ�\n");

	gin_cost = (-1) * random(40);
	if((int)me->query("gin") < gin_cost)
		return notify_fail("�����ھ����޷����У�\n");

	me->add("gin", gin_cost);

	message_vision("$N��ר���ж�ʯ���ϵĹŹ�ͼ�Ρ�\n", me);

	switch( random(1) ) 
	{
	    case 0:
		if ( (int)me->query_skill("unarmed", 1) < 100)
		{
			me->improve_skill("unarmed", me->query("int"));
			write("�����ʯ����ĥ��һ�ض����ƺ���ͽ�ֲ����е��ĵá�\n");
			me->set_temp("stone_learned",1);
	
		}
	}

	if ( !me->query_temp("stone_learned") )
	{
		write("�����ʯ����ĥ��һ�ض�������������˵��̫��ǳ�ԣ�������˵�Ѻ��������ˡ�\n");
	}
	return 1;
}

