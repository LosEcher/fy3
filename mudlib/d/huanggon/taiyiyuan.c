// Room: /d/huanggon/taiyiyuan
inherit ROOM;

void create()
{
  set ("short", "̫ҽԺ");
  set ("long", @LONG
̫ҽԺ�л����ȫ�����ص���ҽ,��ר�����ҿ�����.��ʱ�ʵ�Ҳ��
���Ǹ��������ŵĴ󳼿���.�������ֶ������,������˶����ų�ٺ
»,�������к͵�.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"zhonghedian",
]));
  setup();
  replace_program(ROOM);
}
