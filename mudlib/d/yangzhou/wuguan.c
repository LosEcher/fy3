// Room: /u/swordman/yangzhou/wuguan
inherit ROOM;

void create ()
{
  set ("short", "�������");
  set ("long", @LONG
��������վ��һ��������ݵĽ������У��������Ż�ɫ��ϸɰ��
һȺ��ʮ�������������������Ŭ���ز�����, ����һ�����꺺��
�ڲ�ͣ�ĺ��ź��ӣ�������ܡ�
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/youngman" : 4,
]));
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"beijie1",
  "east" : __DIR__"wuguan1",
]));

  setup();
}
