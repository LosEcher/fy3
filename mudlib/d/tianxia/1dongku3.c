// Room: /d/tianxia/1dongku3
inherit ROOM;

void create()
{
  set ("short", "������");
  set ("long", @LONG
�����ǵ���Ѫ�������ܹ�����ǧ��ٹֵ��̾ߣ����е���¯��¯����
�������ż����������Աߵ�ľ���Ϲ��˼������������滹Ʈ�ż����˵�ͷ����
ǽ����Ĵ�ˮ���л����ζ��ż����ߡ�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"1dongku",
]));
  setup();
  replace_program(ROOM);
}
