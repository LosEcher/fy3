// Room: /d/tianxia/1dongku
inherit ROOM;

void create()
{
  set ("short", "����");
  set ("long", @LONG
�ڰ��ĵ��Σ�������һ��ʯͷ���У���������Ȼͨ���Ļ����ϸ���
���ɵġ�ˮ�δ������ıڵ�������������ʪ�����ģ�����ͨ��������б��
����Ұ���ſ��ľ޿ڡ����������ң������ǿ����ҡ�
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"1dongku3",
  "west" : __DIR__"1dongku2",
  "northdown" : __DIR__"1dongku1",
  "southup" : __DIR__"1road3",
]));
  setup();
  replace_program(ROOM);
}
