// Room: /u/swordman/yangzhou/wuguan1
inherit ROOM;

void create ()
{
  set ("short", "��ݴ���");
  set ("long", @LONG
������ݵ����ã�һ�ж���������������û�е���ʲôҲ���������
��Լ�������ų��Σ��������м�������վ�š�
LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"wuguan",
]));
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/lidayong" : 1,
]));

  setup();
}
