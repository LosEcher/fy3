// Room: /d/tianxia/unarmed
inherit ROOM;

void create()
{
  set ("short", "ȭ��");
  set ("long", @LONG
���ʯ����������עĿ�������м������ľ׮������ͻ�����С��
ľ׮������������ȭ�ŵġ�һ���ǽ���Ϲ���Щȭ�ף������ǽ����
һ���ϴ�Ķ��������Ǳ��˴�����ġ�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"1guan7",
]));
  setup();
}
