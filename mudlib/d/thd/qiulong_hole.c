// thd:qiulong_hole.c
// 97.7.14 by Aug

inherit ROOM;

void create()
{
      set("short", "������");
	set("long", @LONG
������������������ɽ�������󣬵�ȷ�ܸ��Ҳ�ܸɾ����ʺ���
�ľ�ס���������в���С��������Ӷ��������ˣ���һ���յ�ͨ��������
��Ȼ���һ�������֮������ȷû��һ���������ɭ�ֲ�����Ϊ�ܱ��Ƶ���
������Ҳ����һ���ˡ�Ҳ����Ϊ��ˣ�������Ϊ��������
LONG
);

	set("objects", ([ /* sizeof() == 1 */
		__DIR__ "npc/zhou_botong" :  1,
	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 2 */
          "east" : __DIR__"back_hole",
          "west" : __DIR__"front_hole",
	]));
      
	setup();
//	replace_program(ROOM);
}

void init()
{
	object ob;

	if( interactive(ob = this_player()) ) 
	{
		remove_call_out("setup_obj");
		call_out("setup_obj", 1, ob);
	}
}

void setup_obj(object ob)
{
	if(present("jiuyin jing1", ob))
	{
		("/cmds/std/kill")->main(this_object(), ob->name());
	}
}

int valid_leave(object me, string dir)
{
  object ob;

  if(dir!="east") return ::valid_leave(me, dir);

  ob = present("zhou", this_object());
  if( objectp(ob) && ob->is_npc() )
    return notify_fail("�ܲ�ͨ˫��һ�����������ȥ��˵�������ֲ�����ң���Ҫ����໣�\n");
  else
    return ::valid_leave(me, dir);
}
