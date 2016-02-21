// abandon.c
//�޶�: china:99.12.1
inherit F_CLEAN_UP;

int main(object me, string arg)
{
           mapping skill_map,enable_map;
           string *skills,*skill;
           int i,j;

           if( !arg || arg=="" ) return notify_fail("��Ҫ������һ��ܣ�\n");

                 enable_map = me->query_skill_map();
                 skill=keys(enable_map);
                 skill_map=me->query_skills();
                 skills=keys(skill_map);
                for (i=0; i<sizeof(skills); i++)
              {
                if(skills[i] != arg) continue;
                for (j=0; j<sizeof(skill); j++)
                if(enable_map[skill[j]] == skills[i] ||
                   skill[j] == skills[i])
                   {
                         me->map_skill(skill[j]);
                         me->reset_action();
                   }
                         me->delete_skill(arg);
                         write("��ɹ���ɾ����"+to_chinese(arg)+"!\n");
                         return 1;
               }
                         write("��ûѧ�������!\n");
                         return 1;
}

int help()
{
        write(@TEXT
ָ���ʽ��abandon <��������>

����һ������ѧ�ļ��ܣ�ע��������˵�ġ���������ָ������ܴ��������������
ɾ������������ỹҪ��������� 0 ��ʼ����������ؿ��������

���ָ��ʹ�õĳ���ͨ��������ɾ��һЩ����С�ġ��������ļ��ܣ�������Ǽ�����
��������ʱ������������ĸ��ֶ�����ս����ѧϰ�������Щ���ܻ���Ϊ�㾭����ʹ
�ö���������ļ����б��У��������ͱ��뻨��һЩ����ȥ����ס����ѧ����һ��
��Ȼ�����˵����ʸ��в�ͬ�����Ըߵ����ܹ�ѧϰ��༼�ܶ���Ϊ��Ŷ��յĲ��ӣ�
���Խϲ���˾�ֻ��ר����ض�����ܣ������ѧ�ļ�������̫�࣬�����������
����ᷢ�������ѧϰ�ٶȽ���ֻѧ���ּ��ܵ�����������Խ�࣬ѧϰЧ���������
��Խ���أ��������ξ�����һ��ѧ��ͬʱѡ��̫��ѧ�֣���Ȼ����Ȼ����ƾ�����˵�
��־������ȥ�������⽫��໨������౦���ʱ�䡣
TEXT
        );
        return 1;
}

