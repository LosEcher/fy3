// Room: /u/xxy/room/qifodian
inherit ROOM;

void create()
{
  set ("short", "�߷��");
  set ("long", @LONG
���а���һ��¬���Ǵŷ�,��˵�ǽ���������Ž����Ƶ�,�÷�ͨ
��2.47��.����ǧҶ����,����ǧ������,��ν'һ��һ����,ǧҶǧ��
��'��Ҳ.���ڴ����λ�ͥ����д��ľ��'�߷���'������,�����ϰ���
�����Ҷ�(bian).
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"ningcui",
  "south" : __DIR__"huizong",
  "northup" : __DIR__"cangjinge",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "bian" : "һ��'һ����',һ��'������',��֪��ʲô��˼.
",
]));
  setup();
  replace_program(ROOM);

}
