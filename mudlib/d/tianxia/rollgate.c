// Room: /d/new/tianxia/rollgate
inherit ROOM;

void create ()
{
  set ("short", "���»�ؿ�");
  set ("long", @LONG
���Ŵ�·��ǰ��������ɽ�������м�һ���ߴ�Ĺؿ�������[���»�]
���֡��ӹؿ�����ȥ��¥��̨ͤ����Ƚ��ࡣ
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/gategard.c" : 1,
]));
  set("outdoors", "/d/new");
  set("exits", ([ /* sizeof() == 2 */
  "west" : "/d/new/robber/road4",
  "east" : __DIR__"1guan1",
]));

  setup();
}
int valid_leave(object who,string dir)
{
  object ob;
     ob=present("bangzhong",this_object());
   if (dir=="west"||!objectp(ob)||(who->query("banghui")=="���»�"||who->query_temp("tianxia/pass_answer")))
     return ::valid_leave(who,dir);
   else 
     message_vision("$N�����ȵ�������ͨ��!(answer xxx).\n",ob);
 return notify_fail("");
}
