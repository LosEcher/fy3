// thd:in_sea.c
// 97.7.14 bu Aug

inherit ROOM;

void create()
{
      set("short", "��");
	set("long", @LONG
�������ޱ����µĴ��У�ͬʱ�㻹�ڲ�ͣ�����³����ܿ���Ϳ�
��������ľ�ɫ�ˣ���ֻ�ܸе���ˮ����ɫԽ��Խ���
LONG
);  

	setup();
//	replace_program(ROOM);
}

void init()
{
	object obj1;
	if( interactive() ) 
	{
		remove_call_out("move_corpse");
		call_out("move_corpse", 1, obj1);
	}
}

void move_corpse(object obj1)
{
	object ob,room;

//	foreach(ob in all_inventory(environment()) ) 
//      {
	      room = load_object(__DIR__"nbeach");
		message("vision", "һ��ʬ�屻���������˰���\n",room);	
		obj1->move(__DIR__"nbeach");
//	}
}

