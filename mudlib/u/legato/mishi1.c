inherit ROOM;

void create()
{
      set("short", "������");
      set("long", @LONG
������һ�����ң����氵���޹⣬��֪�ж���ŵ�����������ɽׯ
����վ�������˵��������ɽ����Ϊ�˶��ǰ��Ѱ���������ʿ�޽�
�ģ�ֻ������ʲôҲ�����壬Ҳ��֪��ͨ���Ķ�...
LONG
      );

      set("objects", ([
               "/d/yandang/npc/dizi": 2,
      ]));

      setup();
      replace_program(ROOM);
}

