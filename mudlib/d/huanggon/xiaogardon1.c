// Room: /d/huanggon/xiaogardon1
inherit ROOM;

void create()
{
  set ("short", "С��԰");
  set ("long", @LONG
�����е�С��԰,԰�н��˸���ǧ,��ƽʱ����Ů�������Ĵ���.��
���޷���Щ��ľ,�����Ǻ�԰,�ϱߴ����¶��ſ���ȥ�����쾮.����
��Զ�������µ�С��.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"kangxiaowu",
  "west" : __DIR__"hougardon",
  "south" : __DIR__"xiaogardon",
]));
  set("outdoors", "/d/huanggon");
  setup();
  replace_program(ROOM);
}
