// thd:spring.c
// 97.7.14 by Aug

inherit ROOM;

void create()
{
      set("short", "����Ȫ");
	set("long", @LONG
����������Ȫ��������Ǳ��ƽ���Դͷ��Ҳ����ǧ���ٵķ�Դ�ġ���
һ��СС��Ȫˮ�������ı��Ϫˮ���������߳��ٲ�����ʵ������Ҳ����
�������һ����䵽����֮�У�������Ȫ��Ȫˮ��Ȼ�ǵ��ģ����һ���
��Щ�����һ����治���Ǻ��츣�ذ������¿����ܿ���һ�����ٲ���
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 1 */
          "west" : __DIR__"yun_jian",
  	]));
      
	set("outdoors", "thd");

	setup();
//	replace_program(ROOM);
}

void init()
{
	add_action("do_jump", "jump");
}

int do_jump(string arg)
{
	object me;
	int i;

	if(arg!="down") return 0;

	me=this_player();

	if(me->query_skill("dodge")<20)
	{
		write("����Ṧ̫���ˣ���������ȥ�������ģ�\n");
		return 1;
	}

	i=10+random(10);
	if(me->query_stat("kee")<=i)
	{
		write("��̫���ˣ�����������ȥ��Σ�յġ�\n");
		return 1;
	}

	me->consume_stat("kee", i);

	message_vision("$N˳������Ȫ������ȥ��\n",me);
	
	me->move(__DIR__"fall");

	if(me->query("class")=="taohua")
	{
		me->improve_skill("dodge", me->query_skill("dodge")/8+1);
		me->improve_skill("bagua-steps", me->query_skill("bagua-steps")/8+1);

		write("��Ļ����Ṧ�����ˡ�\n");
		write("��ľŹ����Բ������ˡ�\n");
	}
	else
	{
		me->improve_skill("dodge", me->query_skill("dodge")/8+1);
		write("��Ļ����Ṧ�����ˡ�\n");
	}

	return 1;
}




