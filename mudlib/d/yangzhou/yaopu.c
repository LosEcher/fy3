// Room: /u/swordman/yangzhou/yaopu
inherit ROOM;

void create ()
{
  set ("short", "����ҩ��");
  set ("long", @LONG
������һ��ҩ�̣���Ϊ����̼������ܶ࣬����ҩƷ����ȫ��
�۸�Ҳ�ȽϹ�������������������Զ�ϵ�����������ϣ����ȱ��
ҩ�ġ�
LONG);

  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/qilaoban" : 1,
]));
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"ddajie1",
]));

  setup();
}
