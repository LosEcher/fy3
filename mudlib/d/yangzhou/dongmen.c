// Room: /u/swordman/yangzhou/dongmen.c

inherit ROOM;

void create ()
{
  set ("short", "���ݶ���");
  set ("long", @LONG
���Ƕ����ţ��������Ϸ����š����š�����������֣��ٱ��Ǿ���
��ע���Ź������ˣ������С��Ϊ�һ����ֱ����ʯ������
���������졣�����ǽ��⣬��Լ�ɼ�һƬһ���޼ʵ����֣�����Ī
�⡣�����ǳ��
LONG);

  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/d/quanzhou/npc/bing" : 3,
]));
  set("outdoors", "x");
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"jiaowai",
  "west" : __DIR__"ddajie1",
]));

  setup();
}
