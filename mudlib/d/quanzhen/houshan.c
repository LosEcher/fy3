// Room: /d/quanzhen/houshan
inherit ROOM;

void create()
{
  set ("short", "��ɽ");
  set ("long", @LONG
�����ȫ��̵ĺ�ɽ��ƽʱȫ���������ʱ����͵͵�ﵽ�������
��һ�档
LONG);

  set("outdoors", "/d/quanzhen");
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"jingxiushi",
  "northeast":__DIR__"xiaolu1",
]));
  setup();
set("outdoors","/d/quanzhen");
  replace_program(ROOM);
}
