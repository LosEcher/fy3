// music yangzhou's ��·�� 1

inherit ROOM;

void create()
{
  set ("short", "��·��");
  set ("long", @LONG
	����һ����·������ͨ�����ݳ���������ͨ��������ɽׯ����
����һƬ�ޱ߿�Ұ��������ȥ�������̣���Լ������ŢС������֪ͨ��
���Ҳ��������˴���������
LONG);

  set("objects", ([ /* sizeof() == 1 */
           __DIR__"npc/xiaofan" : 1,
                 ]));
  set("outdoors", "/d/yangzhou");
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"huangye5",
  "south" : __DIR__"jiedao1",
  "north" : __DIR__"jiedao4",
]));
  setup();
}
