// Room: /d/japan/haigang
inherit ROOM;

void create()
{
  set ("short", "����");
  set ("long", @LONG
����Ų�����ӿ���ձ���,��������Ե�ʮ��ƽ��,�ߴ��˫Φľ��
��������Ƭ����,����Ǹ�����洬,�����ʽ�����صĴ�ֻ,��Ȼ�Ǵ���
��������.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"road",
]));
  set("outdoors", "/d/japan");
  setup();
}
