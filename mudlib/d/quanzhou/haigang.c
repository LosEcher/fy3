// Room: /d/quanzhou/haigang
inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
�������Ǹ������ĺ���,ͣ���˸�����̴�,��Ϊ��β�Զ����̨�� 
��,���������Ĵ�ֻ�ܶ�,Զ�ﶫ����.��ͷ�������Ĵ�Ա,���˹�,���� 
���С��,��һ����. 
LONG);

  set("no_fight", 1);
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/chuanlaoda.c" : 1,
]));
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"wuliqiao",
  "enter":__DIR__"duchuan",
]));
  set("outdoors", "/d/quanzhou");
  setup();
}
int valid_leave(object me, string dir)
{
	object ob;
	if ((dir=="enter") && !me->query_temp("luyin/target"))
	{
		ob = present("sun", this_object());
	if(objectp(ob)&&!userp(ob)&&living(ob))
		{
			message_vision("\n$N���ְ�$n��ס˵����λ�͹�,�����鿴·����\n", ob, me);
			return notify_fail("");
		}
	}
	return ::valid_leave(me, dir);
}
