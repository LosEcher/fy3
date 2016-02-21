// Room: /d/hangzhou/cooking_room 
inherit ROOM; 
 
void create ()
{
  set ("short", "С����");
  set ("long", @LONG
С�ݵĶ�,��������ǽ�����Ű�ߵ�ľ��,һЩð�������ķ��˺͸�ϴ 
���Ĵ�ײ˰���һ��,���´�һ�Ŵ����������˶���.������һ�ڴ���� 
������Щʲô,ɢ����������. 
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"front_yard",
]));
  set("objects", ([ /* sizeof() == 3 */
  __DIR__"npc/cooking.c" : 1,
  __DIR__"npc/obj/pot.c" : 1,
  __DIR__"npc/obj/baozi.c" : 5,
]));

  setup();
}
int valid_leave(object me, string dir)
{
	object ob;
	if (present("bao zi",me)) 
	{
		ob = present("chushi", this_object());
	if(objectp(ob)&&!userp(ob)&&living(ob))
		{
			message_vision("\n$N���ְ�$n��ס˵���ֳ��ִ�,���󻰰ɣ�\n", ob, me);
			return notify_fail("");
		}
	}
	return ::valid_leave(me, dir);
}