inherit NPC;
void create()
{
 set_name("��ؤ",({"qi gai"}));
 set("age",34);
 set("gender","����");
 set("combat_exp",300);
 set_skill("unarmed",10);
 set("chat_chance",5);
 set("chat_msg",({
 "���紵��,��ؤ������˸���,������˫��.\n",
 "��ؤ����ǰ�治Զ�Ĺ�ǽ,��������.\n",
 "��ؤ͵͵������:��ǰ�������Ӻ���Ǳ����ȥ.\n",
 "��ؤ�۰Ͱ͵Ŀ�����:������,����Եİ�.\n",
 }));
 setup();
 }
int accept_object(object ob,object item)
{
command("say ����������,�����þ��ܽ��빬��.\n");
return 1;
}
  