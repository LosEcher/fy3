// Room: /u/swordman/yangzhou/zahuopu.c

inherit ROOM;

void create ()
{
  set ("short", "�ӻ���");
  set ("long", @LONG
�������ڳ������нֵ��жε�С�ӻ��̣������������У�����������
��ʱ���η����У��������Ե������ε������������ͨ����̫�ã����ϰ�
���󲢲����⡣
LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"nandaj3",
]));
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/lanjinglin" : 1,
]));

  setup();
}
