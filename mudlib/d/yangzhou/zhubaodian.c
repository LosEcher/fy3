// Room: /u/swordman/yangzhou/zhubaodian
inherit ROOM;

void create ()
{
  set ("short", "�鱦��");
  set ("long", @LONG
�鱦������ⱦ�����䣬ѣ������Щ�������۾������µĳ�����
�����Ÿ��������鱦�������������м������ſ�����ѡ�����鱦��һ��
��ľ���ϰ��ſ����߶�ߵ����������֮����͸�ŵ������������ۺ�
��֮����
LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"xijie",
]));
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/jin" : 1,
]));

  setup();
}
