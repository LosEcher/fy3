// Room: /d/room/dongzhong2
inherit ROOM;

void create ()
{
  set ("short", "��");
  set ("long", @LONG
���Ǿ����ɸ��ĺ�,һ���ݺ������ɵĴ󶴿�,һ���ٲ�(pubu)��
�����ʯ������к����,�������¡¡������,��о��Լ�ҡҡ��׹,վ��
վ����.
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "pubu" : "�������Ṧ���ߵĻ�,Ҳ�������(jump)һ������,���ܲ���
��ȥ,
",
]));
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"dongzhong1",
]));

set("valid_startroom",1);
  setup();
}
void init()
{
	add_action("do_jump","jump");
}
int do_jump()
{
	object me;
	me=this_player();
	if(living(me)==0)	return 0;
	if(me->query_skill("dodge",1)<10)	{
		tell_object(me,"��Ļ����Ṧ��û�����Ұɡ�\n");
		return 1;
	}
	message_vision("ֻ��$Nһ����������족���������ٲ���ȥ��\n",me);
	tell_room(__DIR__"pubuding",me->query("name")+"���ٲ���Ծ��������\n");
	me->move(__DIR__"pubuding");
	me->start_busy(3);
	return 1;
}
