// thd:road1.c
// 97.7.15 by Aug

inherit ROOM;

void create()
{
      set("short", "ʯ��·");
	set("long", @LONG
������ʯ��·������������Ī����һ������������ǰ�ˡ�ʯ��·��
�Զ���ֲ���һ����������ʵ�������Ӱ����衣���������߽�ϸ����ʱ��
һ�����ﶼ��������������֮�У��������С����߲�ʱ�д�����ζ�ĺ���
�������������߾����һ�������ͷ�ˣ�����������ʯ��·��Ҫ���뵽����
�����·��������һƬ�ྻ�ĺ�̲��
LONG
);

	set("objects", ([ /* sizeof() == 1 */
		__DIR__ "npc/shagu" :  1,
	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"bulletin" : "...\n",
//    ]));

      set("exits", ([ /* sizeof() == 1 */
          "east" : __DIR__"wroad",
          "west" : __DIR__"dukou_thd",
          "northeast" : __DIR__"nwbeach",
          "southeast" : __DIR__"swbeach",
	]));
      
	set("outdoors", "thd");

	setup();
//	replace_program(ROOM);
}

int valid_leave(object me, string dir)
{
  object ob;

  if((dir=="west")||(me->query_temp("win_shagu")==1)) return ::valid_leave(me, dir);  

  if((string)me->query("class")!="taohua")
  {	
	ob = present("shagu", this_object());
	if (objectp(ob))
//	if( objectp(ob) && ob->is_npc() )
      return notify_fail(
"ɵ��˫��һ���������ȥ��ɵЦ�������ֲ����һ����ӣ������������
���Ǻ�������ɣ��������ң��Ҿ������ȥ������ \n");
  }

  return ::valid_leave(me, dir);    
}
