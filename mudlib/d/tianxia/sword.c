// Room: /d/tianxia/sword
inherit ROOM;

void create()
{
  set ("short", "����");
  set ("long", @LONG
�������Լ���ɼ�����һ��ʯ���Ϲ���Щͼ����������Щͦ����
�̵����Σ������ǽ����һ���������ϣ��������̽���ϸ��������
�������ˣ���������һ��ʯͷ������ɵĽ���������϶��е���
���ۣ�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"1guan7",
]));
  setup();
}
