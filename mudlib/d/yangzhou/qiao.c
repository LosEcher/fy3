// Room: /u/swordman/yangzhou/qiao
inherit ROOM;

void create ()
{
  set ("short", "С������");
  set ("long", @LONG
���������ݳǶ���һ��С�ţ����¾��Ǿ��������ġ����˺ӡ���
�����ݳ�����������������������ˮ���壬������ˮ���˲��ٷ���
�ʹ���ͷ������������С��ֻ���಻�ϣ�һƬ���ݾ���
LONG);

  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/shangren" : 1,
]));
  set("outdoors", "/u/swordman");
  set("exits", ([ /* sizeof() == 2 */
  "down" : __DIR__"qiaoxia",
  "north" : __DIR__"ddajie",
]));

  setup();
}
