// Room: /u/swordman/yangzhou/ycsz1
inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
���߽���һƬ�����֣�����ï���޳����β���ӳ������һ����Ȥ��
����������ͨ��һ��С¥���Ǿ��ǰ����������鷿--��Ҷ��ի������
����ƽ�ն��ڴ˻������ī�ѣ�żȻҲ�ڴ˻Ӻ���ī������ɽׯ���š�
LONG);

  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/obj/zhuye" : 2,
]));
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"ycsz",
  "south" : __DIR__"ycsz2",
]));
  set("outdoors", "/u/swordman");

  setup();
}
