// Room: /d/huanggon/wanchuntin
inherit ROOM;

void create()
{
  set ("short", "��ͤ");
  set ("long", @LONG
��ͤ������һƬ�������֮��,�ɸ��ֽ���ֱ���ô��������
����,��������Ȼ���,��ï�ܵ���Ҷ��Ȼ�γ�ͤ�ӵĶ���.�˵�����,
���հ���.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"qingandian",
]));
  set("outdoors", "/d/huanggon");
  setup();
  replace_program(ROOM);
}
